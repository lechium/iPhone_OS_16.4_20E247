//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLBarometerCalibrationSourceCompanion
{
    struct unique_ptr<CLCompanionNotifier_Type::Client, std::default_delete<CLCompanionNotifier_Type::Client>> fCompanionClient;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00200000001855da
- (void).cxx_destruct;	// IMP=0x00100000001855b2
- (void)onCompanionNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x0010000000185488
- (void)disableSource;	// IMP=0x001000000018543e
- (void)enableSource;	// IMP=0x001000000018533b
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000018529c

@end

