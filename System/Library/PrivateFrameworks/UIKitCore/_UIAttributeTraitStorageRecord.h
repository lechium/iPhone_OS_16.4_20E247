//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIAttributeTraitStorageRecord : NSObject <NSCoding>
{
    UITraitCollection *_traitCollection;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000959241
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (id)description;	// IMP=0x00000000009591b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000959142
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000959086
- (id)initWithTraitCollection:(id)arg1 value:(id)arg2;	// IMP=0x0000000000958fe2

@end

