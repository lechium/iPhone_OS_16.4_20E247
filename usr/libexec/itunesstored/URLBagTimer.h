//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface URLBagTimer : NSObject
{
    NSString *_bagKey;	// 8 = 0x8
    NSString *_cellularBagKey;	// 16 = 0x10
    double _defaultInterval;	// 24 = 0x18
    double _defaultWindow;	// 32 = 0x20
    CDUnknownBlockType _eventBlock;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    _Bool _started;	// 56 = 0x38
    CDUnknownBlockType _preconditionsBlock;	// 64 = 0x40
    id _taskObserver;	// 72 = 0x48
}

+ (id)subscriptionRenewTimer;	// IMP=0x00400000000fb8d0
- (void).cxx_destruct;	// IMP=0x00200000000fc44d
@property(copy, nonatomic) CDUnknownBlockType preconditionsBlock; // @synthesize preconditionsBlock=_preconditionsBlock;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(nonatomic) double defaultWindow; // @synthesize defaultWindow=_defaultWindow;
@property(nonatomic) double defaultInterval; // @synthesize defaultInterval=_defaultInterval;
@property(copy, nonatomic) NSString *cellularBagKey; // @synthesize cellularBagKey=_cellularBagKey;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (double)_windowWithUserDefaultsKey:(id)arg1;	// IMP=0x00100000000fc33b
- (id)_userDefaultsKeyWindowOverride;	// IMP=0x00100000000fc31e
- (id)_userDefaultsKeyWiFiOverride;	// IMP=0x00100000000fc301
- (id)_userDefaultsKeyLastTimeCheck;	// IMP=0x00100000000fc2e4
- (id)_userDefaultsKeyCellularOverride;	// IMP=0x00100000000fc2c7
- (double)_timerIntervalWithBagKey:(id)arg1 userDefaultsKey:(id)arg2;	// IMP=0x00100000000fc174
- (double)_timerInterval;	// IMP=0x00100000000fc094
- (void)_setLastFireDate:(id)arg1;	// IMP=0x00100000000fc023
- (void);	// IMP=0x00100000000fc01d
- (double)_readTimeIntervalFromUserDefaultsKey:(id)arg1;	// IMP=0x00100000000fbf55
- (id)_nextFireDateWithInterval:(double)arg1;	// IMP=0x00100000000fbdc4
- (void)_fireTimer;	// IMP=0x00100000000fbcf5
- (void)_attemptFireForJob:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000fbcef
- (void)_addJobWithDate:(id)arg1 window:(double)arg2 allowsCellular:(_Bool)arg3;	// IMP=0x00100000000fbce9
- (void)start;	// IMP=0x00100000000fba1f
- (void)reset;	// IMP=0x00100000000fb9bd
- (void)invalidate;	// IMP=0x00100000000fb944
- (void)dealloc;	// IMP=0x00100000000fb853
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000000fb666

@end
