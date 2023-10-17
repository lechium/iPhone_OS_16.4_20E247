//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface RPMetrics : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

+ (id)sharedMetricsNoCreate;	// IMP=0x0040000000055776
+ (id)sharedMetrics;	// IMP=0x00100000000556db
- (void).cxx_destruct;	// IMP=0x0020000000055b0a
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_logReceivedMessageType:(int)arg1 identifier:(id)arg2 options:(id)arg3 appID:(id)arg4 timeBegin:(double)arg5 timeEnd:(double)arg6 bytesAdded:(unsigned long long)arg7 messagesAdded:(unsigned long long)arg8;	// IMP=0x0010000000055ae9
- (void)logReceivedMessageType:(int)arg1 identifier:(id)arg2 options:(id)arg3 appID:(id)arg4 ctx:(CDStruct_20fd928a *)arg5;	// IMP=0x001000000005590f
- (void)invalidate;	// IMP=0x00100000000558ad
- (void)_activate;	// IMP=0x0010000000055860
- (void)activate;	// IMP=0x00100000000557ff
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x00100000000557f7
- (id)init;	// IMP=0x0010000000055787

@end
