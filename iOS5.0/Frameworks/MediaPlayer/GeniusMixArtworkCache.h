/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface GeniusMixArtworkCache : NSObject
{
    NSData *_data;
    struct CGImage *_artworkImage;
}

+ (id)artworkCacheWithContentsOfFile:(id)arg1;
+ (id)artworkCacheWithCoverCount:(unsigned int)arg1 coverSize:(struct CGSize)arg2 artworkData:(void *)arg3 length:(unsigned int)arg4;
@property(readonly, nonatomic) struct CGImage *artworkImage;
@property(readonly, nonatomic) struct CGSize coverSize;
@property(readonly, nonatomic) unsigned int coverCount;
- (void)dealloc;
- (id)init;
- (BOOL)writeToFile:(id)arg1;

@end

