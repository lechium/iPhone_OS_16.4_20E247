//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol RoutePlanningRefinementDelegate;

@interface RoutePlanningRefinementModel : NSObject
{
    id _value;	// 8 = 0x8
    int _lastUpdateUsageAction;	// 16 = 0x10
    id <RoutePlanningRefinementDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000007d27b7
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) __weak id <RoutePlanningRefinementDelegate> delegate; // @synthesize delegate=_delegate;
- (int)lastUpdateUsageAction;	// IMP=0x00100000007d277d
- (void)_assertValidValue;	// IMP=0x00100000007d2777
- (void)_resetForMenuPresentation;	// IMP=0x00100000007d276a
- (int)buttonPressUsageAction;	// IMP=0x00100000007d2762
- (int)menuPressUsageAction;	// IMP=0x00100000007d275a
- (CDUnknownBlockType)menuProvider;	// IMP=0x00100000007d2752
- (id)menu;	// IMP=0x00100000007d274a
- (_Bool)shouldShowChevron;	// IMP=0x00100000007d2742
- (_Bool)shouldShowHighlighted;	// IMP=0x00100000007d273a
- (id)titleText;	// IMP=0x00100000007d2732
- (id)iconImage;	// IMP=0x00100000007d272a
- (id)initWithDelegate:(id)arg1 value:(id)arg2;	// IMP=0x00100000007d2637

@end

