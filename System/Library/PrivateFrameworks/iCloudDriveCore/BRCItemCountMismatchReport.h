//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCItemGlobalID, BRMangledID, NSError, NSURL;

__attribute__((visibility("hidden")))
@interface BRCItemCountMismatchReport : NSObject
{
    long long _failureRetryCount;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    _Bool _containsSharedToMeItem;	// 24 = 0x18
    _Bool _wasAbleToRun;	// 25 = 0x19
    long long _itemCountDifference;	// 32 = 0x20
    NSError *_lastError;	// 40 = 0x28
    BRCItemGlobalID *_itemGlobalID;	// 48 = 0x30
    BRMangledID *_zoneMangledID;	// 56 = 0x38
}

+ (void)generateReportForSharedFolder:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000004c8ff
+ (void)_finishReport:(id)arg1 session:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000004c461
- (void).cxx_destruct;	// IMP=0x000000000004d7f4
@property(readonly, nonatomic) BRMangledID *zoneMangledID; // @synthesize zoneMangledID=_zoneMangledID;
@property(readonly, nonatomic) BRCItemGlobalID *itemGlobalID; // @synthesize itemGlobalID=_itemGlobalID;
@property(readonly, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(readonly, nonatomic) _Bool wasAbleToRun; // @synthesize wasAbleToRun=_wasAbleToRun;
@property(readonly, nonatomic) long long itemCountDifference; // @synthesize itemCountDifference=_itemCountDifference;
- (id)telemetryEvent;	// IMP=0x000000000004d6e6
- (void)incrementErrorRetryCountWithSession:(id)arg1;	// IMP=0x000000000004c1bb
- (void)shareChangedDuringCheckWithSession:(id)arg1;	// IMP=0x000000000004c0de
- (id)initWithURL:(id)arg1;	// IMP=0x000000000004c073

@end
