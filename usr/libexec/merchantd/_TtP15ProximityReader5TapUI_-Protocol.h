//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, _TtC15ProximityReader16PINConfiguration;

@protocol _TtP15ProximityReader5TapUI_
- (void)closeUIImmediate;
- (void)closeUI;
- (void)requiresCardPIN:(_TtC15ProximityReader16PINConfiguration *)arg1;
- (void)vasReadSuccessWithMerchantNames:(NSArray *)arg1;
- (void)updateWithTransactionEvent:(long long)arg1;
@end
