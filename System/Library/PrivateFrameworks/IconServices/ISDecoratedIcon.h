//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISIcon, NSArray;

__attribute__((visibility("hidden")))
@interface ISDecoratedIcon
{
    NSArray *_decorations;	// 16 = 0x10
    ISIcon *_icon;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000021b67
- (void).cxx_destruct;	// IMP=0x00000000000227ab
@property(readonly) ISIcon *icon; // @synthesize icon=_icon;
- (id)symbol;	// IMP=0x0000000000022778
- (id)makeResourceProvider;	// IMP=0x0000000000022309
@property(readonly) NSArray *decorations;
- (id)description;	// IMP=0x0000000000022199
- (id)iconWithDecorations:(id)arg1;	// IMP=0x00000000000220eb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002202b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021e5b
- (id)initWithIcon:(id)arg1 decorations:(id)arg2;	// IMP=0x0000000000021b6f

@end

