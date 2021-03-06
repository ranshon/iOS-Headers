//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPContainedObject.h>

#import "TSTCellMap.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTTiledCellMap : TSPContainedObject <TSTCellMap>
{
    NSMutableArray *mTiles;
    unsigned int mCount;
    BOOL mMayModifyFormulasInCells;
    BOOL mMayModifyValuesReferencedByFormulas;
    BOOL mAppliesToHidden;
}

@property(nonatomic) BOOL mayModifyValuesReferencedByFormulas; // @synthesize mayModifyValuesReferencedByFormulas=mMayModifyValuesReferencedByFormulas;
@property(nonatomic) BOOL mayModifyFormulasInCells; // @synthesize mayModifyFormulasInCells=mMayModifyFormulasInCells;
@property(nonatomic) BOOL appliesToHidden; // @synthesize appliesToHidden=mAppliesToHidden;
- (void)saveToArchive:(struct TiledCellMapArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TiledCellMapArchive *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (void)popLastCell;
- (void)addCell:(id)arg1 andCellID:(CDStruct_0441cfb5)arg2;
- (id)cellAtIndex:(unsigned int)arg1;
- (CDStruct_0441cfb5)cellIDAtIndex:(unsigned int)arg1;
- (id)tileForIndex:(unsigned int)arg1;
- (unsigned int)tileIndexForIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

