//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIPageComponent.h"

@class NSString, SKUIDividerViewElement;

__attribute__((visibility("hidden")))
@interface SKUIDividerPageComponent : SKUIPageComponent
{
    NSString *_title;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000027ff4
@property(readonly, nonatomic) NSString *dividerTitle; // @synthesize dividerTitle=_title;
- (long long)componentType;	// IMP=0x0000000000027fd8
- (id)initWithViewElement:(id)arg1;	// IMP=0x0000000000027fa9
- (id)initWithDividerTitle:(id)arg1;	// IMP=0x0000000000027f2f
- (id)initWithCustomPageContext:(id)arg1;	// IMP=0x0000000000027e33

// Remaining properties
@property(readonly, nonatomic) SKUIDividerViewElement *viewElement; // @dynamic viewElement;

@end

