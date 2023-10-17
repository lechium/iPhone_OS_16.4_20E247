//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView;
@protocol AVMobileAuxiliaryControlDelegate;

__attribute__((visibility("hidden")))
@interface AVMobileAuxiliaryControl : NSObject
{
    id <AVMobileAuxiliaryControlDelegate> _delegate;	// 8 = 0x8
    _Bool _included;	// 16 = 0x10
    long long _displayPriority;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    UIView *_controlView;	// 40 = 0x28
}

+ (id)controlWithDisplayPriority:(long long)arg1 identifier:(id)arg2;	// IMP=0x00600000000a3683
+ (id)controlWithView:(id)arg1 displayPriority:(long long)arg2 identifier:(id)arg3;	// IMP=0x00600000000a35d3
- (void).cxx_destruct;	// IMP=0x00000000000a35a2
@property(readonly, nonatomic) UIView *controlView; // @synthesize controlView=_controlView;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long displayPriority; // @synthesize displayPriority=_displayPriority;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic) __weak id <AVMobileAuxiliaryControlDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;	// IMP=0x00000000000a34ce
- (_Bool)canOnlyAppearInOverflowMenu;	// IMP=0x00000000000a34c0

@end
