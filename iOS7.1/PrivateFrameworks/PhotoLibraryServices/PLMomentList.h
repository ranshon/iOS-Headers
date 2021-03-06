//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLAssetContainerList.h"

@class NSArray, NSData, NSDate, NSOrderedSet, NSString, PLRevGeoCompoundNameInfo;

@interface PLMomentList : PLManagedObject <PLAssetContainerList>
{
    PLRevGeoCompoundNameInfo *_cachedPrimaryNameInfo;
    PLRevGeoCompoundNameInfo *_cachedSecondaryNameInfo;
    BOOL _loadedNameInfo;
}

+ (id)descriptionForGranularityLevel:(short)arg1;
+ (id)findOrCreateYearMomentListForYear:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)findOrCreateMegaMomentListForLeftoverMomentsInMonth:(int)arg1 inYear:(int)arg2 withDay:(int)arg3 inManagedObjectContext:(id)arg4;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3 returnsObjectsAsFaults:(BOOL)arg4;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 returnsObjectsAsFaults:(BOOL)arg3;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
- (void)removeMomentsForYear:(id)arg1;
- (void)addMomentsForYear:(id)arg1;
- (void)removeMomentsForYearObject:(id)arg1;
- (void)addMomentsForYearObject:(id)arg1;
- (void)replaceMomentsForYearAtIndexes:(id)arg1 withMomentsForYear:(id)arg2;
- (void)removeMomentsForYearAtIndexes:(id)arg1;
- (void)insertMomentsForYear:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsForYearAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsForYearAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inMomentsForYearAtIndex:(unsigned int)arg2;
- (void)removeMomentsForMegaMoment:(id)arg1;
- (void)addMomentsForMegaMoment:(id)arg1;
- (void)removeMomentsForMegaMomentObject:(id)arg1;
- (void)addMomentsForMegaMomentObject:(id)arg1;
- (void)replaceMomentsForMegaMomentAtIndexes:(id)arg1 withMomentsForMegaMoment:(id)arg2;
- (void)removeMomentsForMegaMomentAtIndexes:(id)arg1;
- (void)insertMomentsForMegaMoment:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsForMegaMomentAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsForMegaMomentAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inMomentsForMegaMomentAtIndex:(unsigned int)arg2;
- (void)didTurnIntoFault;
- (id)pl_debugDescription;
- (id)diagnosticInformation;
- (BOOL)supportsDiagnosticInformation;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)_updateCachedNameInfoIfNeeded;
@property(retain, nonatomic) NSOrderedSet *moments;
- (id)_typeDescription;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (BOOL)isEmpty;
@property(readonly, nonatomic) unsigned int containersCount;
- (id)containers;
- (void)willSave;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)_validateForInsertOrUpdate:(id *)arg1;
- (void)dealloc;
- (BOOL)isMeaningful;
- (void)delete;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(nonatomic) short generationType; // @dynamic generationType;
@property(nonatomic) short granularityLevel; // @dynamic granularityLevel;
@property(retain, nonatomic) NSOrderedSet *momentsForMegaMoment; // @dynamic momentsForMegaMoment;
@property(retain, nonatomic) NSOrderedSet *momentsForYear; // @dynamic momentsForYear;
@property(retain, nonatomic) NSDate *representativeDate; // @dynamic representativeDate;
@property(retain, nonatomic) NSData *reverseLocationData; // @dynamic reverseLocationData;
@property(nonatomic) BOOL reverseLocationDataIsValid; // @dynamic reverseLocationDataIsValid;
@property(nonatomic) int sortIndex; // @dynamic sortIndex;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

