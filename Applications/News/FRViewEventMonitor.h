//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface FRViewEventMonitor : NSObject
{
    NSMutableSet *_visibleViews;	// 8 = 0x8
}

+ (id)sharedMonitor;	// IMP=0x004000000006f4c3
- (void).cxx_destruct;	// IMP=0x002000000006f9be
@property(retain, nonatomic) NSMutableSet *visibleViews; // @synthesize visibleViews=_visibleViews;
@property(readonly, nonatomic) NSArray *viewContentIDs;
@property(readonly, nonatomic) NSArray *visibleViewTypes;
- (void)viewDidDisappear:(id)arg1;	// IMP=0x001000000006f594
- (void)viewDidAppear:(id)arg1;	// IMP=0x001000000006f57e
- (id)init;	// IMP=0x001000000006f518

@end
