/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding-Protocol.h"

@class NSNumber, NSString;

@interface SSAuthorizationRequest : SSRequest <SSXPCCoding>
{
    NSNumber *_accountIdentifier;
    NSString *_keybagPath;
    id _token;
}

@property(copy) NSString *keybagPath; // @synthesize keybagPath=_keybagPath;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(id)arg1;
- (_Bool)start;
- (void)startWithAuthorizationResponseBlock:(id)arg1;
@property(readonly) id authorizationToken;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;
- (id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(nonatomic) id <SSAuthorizationRequestDelegate> delegate; // @dynamic delegate;

@end

