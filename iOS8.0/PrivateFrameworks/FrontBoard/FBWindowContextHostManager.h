//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBWindowContextHostViewDelegate.h"

@class FBOrderedRequesters, FBScene, FBWindowContextHostView, FBWindowContextManager, NSHashTable, NSMutableDictionary, NSString, UIColor;

@interface FBWindowContextHostManager : NSObject <FBWindowContextHostViewDelegate>
{
    FBWindowContextManager *_contextManager;
    FBScene *_scene;
    NSString *_identifier;
    UIColor *_defaultBackgroundColorWhileHosting;
    UIColor *_defaultBackgroundColorWhileNotHosting;
    FBWindowContextHostView *_hostView;
    BOOL _suspended;
    BOOL _invalidated;
    FBOrderedRequesters *_hostRequesters;
    NSMutableDictionary *_hostRequesterInfo;
    NSHashTable *_observers;
    id <FBWindowContextHostManagerDelegate> _delegate;
    struct {
        unsigned int delegateOverrideRequester:1;
        unsigned int delegateShouldEnableContextHostingForRequester:1;
    } _flags;
}

@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)windowContextHostViewHostedContextsDidChange:(id)arg1;
- (void)_updateHostViewFrameForRequester:(id)arg1;
- (void)_notePropertiesSetOnRealContextHostViewWhichIReallyNeedToChangeAndIKnowWhatImDoingISwear:(id)arg1 originalProperties:(id)arg2 forRequester:(id)arg3;
- (id)_realContextHostViewWhichIReallyNeedToAccessAndIKnowWhatImDoingISwear;
- (unsigned int)_populateContextIDs:(unsigned int *)arg1 forSnapshotExcludingContexts:(id)arg2;
- (id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (id)_hostViewForRequester:(id)arg1;
- (struct CGImage *)_snapshotCGImageRefForFrame:(struct CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(struct CGAffineTransform *)arg4 outIOSurfaceRef:(id *)arg5;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (void)_removeRequesterInfo:(id)arg1;
- (void)_applyRequesterInfo:(id)arg1;
- (id)_infoForRequester:(id)arg1;
- (struct CGImage *)snapshotCGImageRefForFrame:(struct CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(struct CGAffineTransform *)arg4;
- (id)snapshotUIImageForFrame:(struct CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3 outTransform:(struct CGAffineTransform *)arg4;
- (id)snapshotViewWithFrame:(struct CGRect)arg1 excludingContexts:(id)arg2 opaque:(BOOL)arg3;
- (void)setContextId:(unsigned int)arg1 hidden:(BOOL)arg2 forRequester:(id)arg3;
- (id)visibleContexts;
- (void)orderRequesterFront:(id)arg1;
- (void)disableHostingForRequester:(id)arg1;
- (void)resumeContextHosting;
- (void)suspendContextHosting;
- (void)invalidate;
- (void)enableHostingForRequester:(id)arg1 priority:(int)arg2;
- (void)enableHostingForRequester:(id)arg1 orderFront:(BOOL)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2 appearanceStyle:(unsigned int)arg3;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned int)arg2;
- (id)hostViewForRequester:(id)arg1;
@property(readonly, copy) NSString *description;
- (unsigned int)contextCount;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileNotHosting;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileHosting;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(nonatomic) id <FBWindowContextHostManagerDelegate> delegate;
- (void)dealloc;
- (id)initWithContextManager:(id)arg1 scene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

