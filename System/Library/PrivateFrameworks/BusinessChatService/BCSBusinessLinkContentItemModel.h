//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSBusinessLinkContentItemModel : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
    _Bool _isDefault;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003d12c
- (void).cxx_destruct;	// IMP=0x000000000003d407
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003d3d7
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003d387
- (id)succinctDescriptionBuilder;	// IMP=0x000000000003d2c2
- (id)succinctDescription;	// IMP=0x000000000003d272
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d134
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003d016
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003cf7c
@property(readonly, copy) NSString *description;
- (id)initWithBusinessLinkContent:(id)arg1;	// IMP=0x00000000000282a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

