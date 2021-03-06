//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, VGLMesh;

__attribute__((visibility("hidden")))
@interface VGLMeshVendor : NSObject
{
    CDUnknownBlockType _creator;
    NSMutableArray *_meshes;
    VGLMesh *_currentMesh;
    unsigned int _vertexCount;
    unsigned int _indexCount;
}

@property(readonly, nonatomic) NSArray *meshes; // @synthesize meshes=_meshes;
@property(readonly, nonatomic) int indexCount;
@property(readonly, nonatomic) int vertexCount;
- (void)freezeStructure;
- (void)freeze;
- (void)reserveVertexCount:(int)arg1 indexCount:(int)arg2 vertices:(void **)arg3 indices:(unsigned short **)arg4 initialVertexCount:(int *)arg5;
- (id)meshWithVertexCount:(int)arg1;
- (void)dealloc;
- (id)initWithCreator:(CDUnknownBlockType)arg1;

@end

