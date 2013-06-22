/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TextInput/TIKeyboardOperation.h>

@interface TIKeyboardOperationDeleteBackward : TIKeyboardOperation
{
    BOOL _shouldNotify;
    unsigned int _deletionCount;
}

+ (id)operationWithDeletionCount:(unsigned int)arg1 shouldNotify:(BOOL)arg2;
+ (id)operationWithDeletionCount:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL shouldNotify; // @synthesize shouldNotify=_shouldNotify;
@property(readonly, nonatomic) unsigned int deletionCount; // @synthesize deletionCount=_deletionCount;
- (id)propertiesForDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeletionCount:(unsigned int)arg1 shouldNotify:(BOOL)arg2;

@end
