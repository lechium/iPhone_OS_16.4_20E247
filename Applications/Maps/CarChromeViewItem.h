//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol CarChromeContext;

@interface CarChromeViewItem : NSObject
{
    MISSING_TYPE *_autohidingContentIsHidden;	// 8 = 0x8
    id <CarChromeContext> _context;	// 16 = 0x10
    long long _hardwareBackButtonBehavior;	// 24 = 0x18
    long long _autohideBehavior;	// 32 = 0x20
}

+ (id)itemWithContext:(id)arg1;	// IMP=0x0040000000102ad8
- (void).cxx_destruct;	// IMP=0x0020000000102be6
@property(nonatomic, getter=isAutohidingContentHidden) _Bool autohidingContentIsHidden; // @synthesize autohidingContentIsHidden=_autohidingContentIsHidden;
@property(nonatomic) long long autohideBehavior; // @synthesize autohideBehavior=_autohideBehavior;
@property(nonatomic) long long hardwareBackButtonBehavior; // @synthesize hardwareBackButtonBehavior=_hardwareBackButtonBehavior;
@property(nonatomic) __weak id <CarChromeContext> context; // @synthesize context=_context;
- (id)initWithContext:(id)arg1;	// IMP=0x0010000000102b21

@end

