//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class VKTileKeyMap;

__attribute__((visibility("hidden")))
@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying>
{
    void *_head;
    void *_tail;
    VKTileKeyMap *_map;
    unsigned int _count;
    unsigned int _maxCount;
}

- (BOOL)isEqualToList:(id)arg1;
- (BOOL)removeKey:(const struct VKTileKey *)arg1;
- (void)removeKeysMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)sort:(CDUnknownBlockType)arg1;
- (id)listWithout:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (unsigned int)count;
- (unsigned int)capacity;
- (BOOL)containsKey:(const struct VKTileKey *)arg1;
- (void)_addKeyToBack:(const struct VKTileKey *)arg1;
- (void)addKey:(const struct VKTileKey *)arg1;
- (BOOL)addKey:(const struct VKTileKey *)arg1 lostKey:(struct VKTileKey *)arg2;
- (struct VKTileKey *)firstKey;
- (id)description;
- (void)dealloc;
- (id)copyWithMaxCapacity:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMaxCapacity:(unsigned int)arg1;
- (id)init;

@end

