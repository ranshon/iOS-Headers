//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioGetWishListRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    unsigned int _maxNumberOfTracks;
}

@property(nonatomic) unsigned int maxNumberOfTracks; // @synthesize maxNumberOfTracks=_maxNumberOfTracks;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)init;

@end

