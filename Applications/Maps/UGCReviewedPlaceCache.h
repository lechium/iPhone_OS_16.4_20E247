//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSString;

@interface UGCReviewedPlaceCache : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
}

+ (id)baseFilePath:(id *)arg1;	// IMP=0x0020000000289d28
- (void).cxx_destruct;	// IMP=0x002000000028b17c
- (void)clearAllUserData;	// IMP=0x001000000028b0e5
- (void)addOrEditReviewedPlace:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000028ad45
- (void)removeReviewedPlaceWithMUID:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000028aa76
- (id)locallyCachedReviewedPlaceForMUID:(unsigned long long)arg1;	// IMP=0x001000000028a703
- (void)fetchReviewedPlaceForMUID:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000028a1cd
- (void)fetchWithMUID:(unsigned long long)arg1 andReplaceIfNeededWithNewMUID:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000289e40
- (void)_commonInitWithURL:(id)arg1;	// IMP=0x001000000028995f
- (id)initWithURL:(id)arg1;	// IMP=0x00100000002898f7
- (id)init;	// IMP=0x0010000000289871

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
