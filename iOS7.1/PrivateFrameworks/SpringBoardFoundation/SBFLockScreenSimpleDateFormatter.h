//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFLockScreenDateFormatter.h"

@class NSTimeZone;

@interface SBFLockScreenSimpleDateFormatter : NSObject <SBFLockScreenDateFormatter>
{
    NSTimeZone *_timeZone;
}

@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
- (id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1;
- (id)formatDateAsTimeNoAMPM:(id)arg1;
- (void)resetFormattersIfNecessary;
- (void)dealloc;

@end

