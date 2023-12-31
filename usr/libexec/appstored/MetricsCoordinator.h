//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;
@protocol OS_dispatch_queue;

@interface MetricsCoordinator : NSObject
{
    NSNumber *_activeAccountID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSDate *_systemUpDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000013d2c6
- (void)_handleAppleIDDidChangeNotification:(id)arg1;	// IMP=0x001000000013c2e3
- (id)init;	// IMP=0x00100000001396e0

@end

