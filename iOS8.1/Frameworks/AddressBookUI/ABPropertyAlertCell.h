//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPropertySimpleCell.h>

#import "ABPickerControllerDelegate.h"

@class ABPropertyGroupAlertItem, NSString;

@interface ABPropertyAlertCell : ABPropertySimpleCell <ABPickerControllerDelegate>
{
}

+ (BOOL)wantsChevron;
- (void)pickerDidCancel:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)performDefaultAction;
- (BOOL)shouldPerformDefaultAction;
@property(readonly, nonatomic) ABPropertyGroupAlertItem *alertItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

