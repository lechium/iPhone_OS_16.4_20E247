//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol _TtP15ProximityReader13TapUIDelegate_
- (void)reportGuidanceUpdateWithVisible:(_Bool)arg1 trigger:(NSString *)arg2;
- (void)reportPINErrorWithError:(long long)arg1 isCardRequest:(_Bool)arg2 isAccessibilityEnabled:(_Bool)arg3;
- (void)tapUIFinishedWithExpected:(_Bool)arg1;
- (void)tapUIRequestingCancel;
- (void)tapUIRequestingRetry;
- (void)tapUIDidLoad;
@end
