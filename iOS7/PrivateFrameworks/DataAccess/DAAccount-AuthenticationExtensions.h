/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataAccess/DAAccount.h>

@interface DAAccount (AuthenticationExtensions)
+ (void)reacquireClientRestrictions:(id)arg1;
+ (id)oneshotListOfAccountIDs;
+ (id)_leafAccountTypes;
- (void)handleValidationError:(id)arg1 completion:(id)arg2;
- (void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(id)arg3;
- (void)_webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(id)arg3;
- (void)dropAssertionsAndRenewCredentialsWithHandler:(id)arg1;
- (id)localizedInvalidPasswordMessage;
- (id)localizedIdenticalAccountFailureMessage;
@end

