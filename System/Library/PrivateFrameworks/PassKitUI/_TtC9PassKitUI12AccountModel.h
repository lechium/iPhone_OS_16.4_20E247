//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9PassKitUI12AccountModel : NSObject
{
    MISSING_TYPE *_account;	// 3909038591 = 0xe8ff31ff
    MISSING_TYPE *_savingsDetails;	// 2202537920 = 0x83480fc0
    MISSING_TYPE *_savingsSummary;	// 1216414819 = 0x48810463
    MISSING_TYPE *_observableBalance;	// 4294084940 = 0xfff2894c
    MISSING_TYPE *_isNewAccount;	// 1224736901 = 0x49000085
    MISSING_TYPE *_expectingAccountUpdate;	// 2336751616 = 0x8b480000
    MISSING_TYPE *accountService;	// 1278249728 = 0x4c308b00
    MISSING_TYPE *activeState;	// 1750335474 = 0x6853fff2
    MISSING_TYPE *suspendingUpdates;	// 1208015778 = 0x4800dba2
    MISSING_TYPE *pendingAccount;	// 4281401560 = 0xff3100d8
}

- (void).cxx_destruct;	// IMP=0x0000000000095a20
- (id)init;	// IMP=0x0000000000096380
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_3d581f42)arg2;	// IMP=0x0000000000096240
- (void)accountRemoved:(id)arg1;	// IMP=0x0000000000095fe0
- (void)accountChanged:(id)arg1;	// IMP=0x0000000000095fd0
- (void)dealloc;	// IMP=0x00000000000959a0

@end

