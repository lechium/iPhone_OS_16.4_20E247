//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

__attribute__((visibility("hidden")))
@interface NSCFOutputStream : NSOutputStream
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00800000004f376c
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00800000004f3764
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x00000000004f3a5a
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x00000000004f3a4a
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04 *)arg3;	// IMP=0x00000000004f3a31
- (_Bool)hasSpaceAvailable;	// IMP=0x00000000004f3a21
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00000000004f3a11
- (id)streamError;	// IMP=0x00000000004f39ff
- (unsigned long long)streamStatus;	// IMP=0x00000000004f39f5
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000000004f39c0
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000000004f398b
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000004f3978
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000004f3963
- (void)setDelegate:(id)arg1;	// IMP=0x00000000004f3894
- (id)delegate;	// IMP=0x00000000004f388a
- (void)close;	// IMP=0x00000000004f3880
- (void)open;	// IMP=0x00000000004f3876
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;	// IMP=0x00000000004f3825
- (id)initToFileAtPath:(id)arg1 append:(_Bool)arg2;	// IMP=0x00000000004f37b6
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000000004f3793
- (id)initToMemory;	// IMP=0x00000000004f3778
- (unsigned long long)retainCount;	// IMP=0x00000000004f375a
- (_Bool)retainWeakReference;	// IMP=0x00000000004f3749
- (_Bool)allowsWeakReference;	// IMP=0x00000000004f3739
- (oneway void)release;	// IMP=0x00000000004f372f
- (id)retain;	// IMP=0x00000000004f3717
- (unsigned long long)hash;	// IMP=0x00000000004f370d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004f36ea

@end

