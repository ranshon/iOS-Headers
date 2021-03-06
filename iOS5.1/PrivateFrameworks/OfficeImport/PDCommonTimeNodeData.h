/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, PDIterate;

@interface PDCommonTimeNodeData : NSObject
{
    NSMutableArray *mStartTimeConditions;
    NSMutableArray *mEndTimeConditions;
    NSMutableArray *mChildTimeNodeList;
    NSMutableArray *mSubTimeNodeList;
    PDIterate *mIterate;
    int mType;
    int mAnimationPresetClass;
    int mPresetId;
    int mPresetSubType;
    int mRepeatCount;
    int mRepeatDuration;
    int mRestartType;
    BOOL mHasDuration;
    double mDuration;
    double mSpeed;
    double mAcceleration;
    double mDeceleration;
    NSString *mGroupId;
}

- (id)init;
- (void)dealloc;
- (id)startTimeConditions;
- (void)setStartTimeConditions:(id)arg1;
- (id)endTimeConditions;
- (void)setEndTimeConditions:(id)arg1;
- (id)childTimeNodeList;
- (void)setChildTimeNodeList:(id)arg1;
- (id)subTimeNodeList;
- (void)setSubTimeNodeList:(id)arg1;
- (id)iterate;
- (void)setIterate:(id)arg1;
- (BOOL)hasType;
- (int)type;
- (void)setType:(int)arg1;
- (BOOL)hasPresetClass;
- (int)animationPresetClass;
- (void)setAnimationPresetClass:(int)arg1;
- (int)presetSubType;
- (void)setPresetSubType:(int)arg1;
- (int)presetId;
- (void)setPresetId:(int)arg1;
- (int)repeatCount;
- (void)setRepeatCount:(int)arg1;
- (int)repeatDuration;
- (void)setRepeatDuration:(int)arg1;
- (BOOL)hasRestartType;
- (int)restartType;
- (void)setRestartType:(int)arg1;
- (BOOL)hasDuration;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)speed;
- (void)setSpeed:(double)arg1;
- (double)acceleration;
- (void)setAcceleration:(double)arg1;
- (double)deceleration;
- (void)setDeceleration:(double)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (void)setGroupIdValue:(int)arg1;

@end

