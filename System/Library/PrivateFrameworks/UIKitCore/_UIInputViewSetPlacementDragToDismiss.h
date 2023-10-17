//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIInputViewSetPlacementDragToDismiss
{
    _Bool _dismissKeyboardOnly;	// 40 = 0x28
    double _offset;	// 48 = 0x30
}

+ (id)placementWithOffset:(double)arg1 dismissKeyboardOnly:(_Bool)arg2;	// IMP=0x0010000000b60e18
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b60e10
@property(nonatomic) _Bool dismissKeyboardOnly; // @synthesize dismissKeyboardOnly=_dismissKeyboardOnly;
@property(nonatomic) double offset; // @synthesize offset=_offset;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b611e9
- (_Bool)isInteractive;	// IMP=0x0000000000b611e1
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x0000000000b60f78
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b60ef9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b60e7a
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x0000000000b60dff

@end
