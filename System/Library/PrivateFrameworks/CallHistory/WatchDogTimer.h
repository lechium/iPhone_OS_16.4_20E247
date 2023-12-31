//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHLogger.h"

@class NSObject, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface WatchDogTimer : CHLogger
{
    NSString *_name;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000345d3
- (void)cancel;	// IMP=0x0000000000034522
- (void)dealloc;	// IMP=0x0000000000034453
- (id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(CDUnknownBlockType)arg4;	// IMP=0x0000000000034113

@end

