//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (IC)
+ (id)ic_loggingDescriptionFromLoggable:(id)arg1 isPretty:(_Bool)arg2;	// IMP=0x008000000001d91a
- (_Bool)ic_shouldIgnoreObserveValue:(id)arg1 ofObject:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x001000000000e901
- (void)ic_removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x001000000000e887
- (_Bool)ic_didAddObserverForContext:(void *)arg1 inScope:(char *)arg2;	// IMP=0x001000000000e7e5
- (void)ic_addObserver:(id)arg1 forKeyPath:(id)arg2 context:(CDStruct_91a0c811 *)arg3 explicitOptions:(unsigned long long)arg4;	// IMP=0x001000000000e7ca
- (void)ic_addObserver:(id)arg1 forKeyPath:(id)arg2 context:(CDStruct_91a0c811 *)arg3;	// IMP=0x001000000000e7b2
- (id)ic_loggingIdentifier;	// IMP=0x001000000001d8f5
- (id)ic_prettyLoggingDescription;	// IMP=0x001000000001d884
- (id)ic_loggingDescription;	// IMP=0x001000000001d816
@end

