//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableArray;

@interface PDPassCloudStoreContainerContent : NSObject
{
    NSMutableArray *_cloudPasses;	// 8 = 0x8
    NSMutableArray *_cloudPassCatalogs;	// 16 = 0x10
    NSMutableArray *_cloudRecordIDs;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    long long _syncType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000002806da
- (id)description;	// IMP=0x00100000002805ee
@property(readonly, nonatomic) long long typeOfSyncPerformed;
@property(readonly, nonatomic) NSError *errorEncounered;
@property(readonly, nonatomic) NSArray *cloudRecordIDs;
@property(readonly, nonatomic) NSArray *cloudPassCatalogs;
@property(readonly, nonatomic) NSArray *cloudPasses;
- (void)noteTypeOfSyncPerformed:(long long)arg1;	// IMP=0x0010000000280572
- (void)noteEnounteredError:(id)arg1;	// IMP=0x0010000000280561
- (void)appendCatalog:(id)arg1;	// IMP=0x001000000028054b
- (void)appendPassID:(id)arg1;	// IMP=0x00100000002804fb
- (void)appendPass:(id)arg1;	// IMP=0x00100000002804e5
- (id)init;	// IMP=0x0010000000280459

@end
