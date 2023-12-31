//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCarrierSpaceClient;

__attribute__((visibility("hidden")))
@interface SSBDatabaseUpdateSupport : NSObject
{
    CTCarrierSpaceClient *_carrierSpaceClient;	// 8 = 0x8
    _Bool _onHighCellularDataPlan;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000373fa
@property(readonly, nonatomic) _Bool onHighCellularDataPlan; // @synthesize onHighCellularDataPlan=_onHighCellularDataPlan;
- (id)fetchCellularDataPlanSynchronously;	// IMP=0x0000000000037212
- (void)_fetchCellularDataPlan;	// IMP=0x0000000000037186
- (void)_fetchCellularDataPlanWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000036fc9
- (id)init;	// IMP=0x0000000000036f67

@end

