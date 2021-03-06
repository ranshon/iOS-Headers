//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetDownloadSessionInternal, NSError, NSURL;

@interface AVAssetDownloadSession : NSObject
{
    AVAssetDownloadSessionInternal *_internal;
}

+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;
+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
@property(readonly, nonatomic) unsigned long long downloadToken;
@property(readonly, nonatomic) unsigned long long availableFileSize;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, nonatomic) int priority;
@property(readonly, nonatomic) NSURL *destinationURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) int status;
- (void)stop;
- (void)pause;
- (void)start;
- (void)finalize;
- (void)dealloc;
- (id)initWithDownloadToken:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)init;
- (void)_removeFigPlaybackItemListeners;
- (void)_addFigPlaybackItemListeners;
- (id)_figPlaybackItemNotificationNames;
- (void)_removeFigAssetListeners;
- (void)_addFigAssetListeners;
- (id)_figAssetNotificationNames;
- (long)_readyForInspection;
- (long)_primeCache;
- (void)_primeCacheOnDispatchQueue;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;
- (void)_transitionToTerminalStatus:(int)arg1 error:(id)arg2;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (BOOL)_setFigAsset:(struct OpaqueFigAsset *)arg1;
- (struct OpaqueFigAsset *)_figAsset;
- (id)_weakReference;

@end

