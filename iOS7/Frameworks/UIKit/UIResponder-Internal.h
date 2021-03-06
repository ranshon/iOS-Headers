/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIResponder.h>

@interface UIResponder (Internal)
- (void)_didChangeToFirstResponder:(id)arg1;
- (_Bool)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2;
- (id)_responderSelectionImage;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;
- (id)_deepestUnambiguousResponder;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_moveWithEvent:(id)arg1;
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (_Bool)_canShowTextServices;
- (id)_nextViewControllerInResponderChain;
- (_Bool)_isViewController;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3 index:(unsigned long long)arg4;
- (_Bool)_isTransitioningFromView:(id)arg1;
- (void)_windowResignedKey;
- (void)_windowBecameKey;
- (id)nextFirstResponder;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
- (_Bool)_isPinningInputViews;
- (void)_endPinningInputViews;
- (void)_beginPinningInputViews;
- (void)_becomeFirstResponderAndMakeVisible;
- (_Bool)_canBecomeFirstResponder;
- (void)_resignFirstResponder;
- (void)_becomeFirstResponder;
- (_Bool)_resignIfContainsFirstResponder;
- (id)_responderWindow;
- (id)_keyboardResponder;
- (_Bool)_requiresKeyboardResetOnReload;
- (_Bool)_requiresKeyboardWindowWhenFirstResponder;
- (_Bool)_requiresKeyboardWhenFirstResponder;
- (id)_keyCommandForEvent:(id)arg1;
- (id)_keyCommands;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (id)_window;

// Remaining properties
@property(readonly, nonatomic) UIResponder *_editingDelegate;
@property(readonly, nonatomic) UIResponder *_responderForEditing;
@end

