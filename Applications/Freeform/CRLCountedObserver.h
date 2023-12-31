//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CRLChangeSourceObserver;

@interface CRLCountedObserver : NSObject
{
    id <CRLChangeSourceObserver> _observer;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000024e9f6
@property(readonly, nonatomic) unsigned long long currentCount; // @synthesize currentCount=_count;
- (unsigned long long)decrementCount;	// IMP=0x001000000024e7cd
- (unsigned long long)incrementCount;	// IMP=0x001000000024e7bc
- (id)observerIgnoringCount;	// IMP=0x001000000024e7a6
- (id)observer;	// IMP=0x001000000024e785
- (id)initWithObserver:(id)arg1;	// IMP=0x001000000024e719

@end

