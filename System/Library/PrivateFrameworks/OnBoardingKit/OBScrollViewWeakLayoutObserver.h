//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UIScrollViewLayoutObserver;

__attribute__((visibility("hidden")))
@interface OBScrollViewWeakLayoutObserver : NSObject
{
    OBScrollViewWeakLayoutObserver *_selfReference;	// 8 = 0x8
    id <_UIScrollViewLayoutObserver> _weakLayoutObserver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004425c
- (void)_scrollViewDidLayoutSubviews:(id)arg1;	// IMP=0x00000000000441fd
- (id)initWithLayoutObserver:(id)arg1;	// IMP=0x000000000004418d

@end

