//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyAction;

__attribute__((visibility("hidden")))
@interface CNQuickPropertyAction
{
}

- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007a0b8
- (unsigned long long)score;	// IMP=0x0000000000079fa5
- (_Bool)enabled;	// IMP=0x0000000000079f22
- (id)subtitleForContext:(long long)arg1;	// IMP=0x0000000000079e07
- (id)titleForContext:(long long)arg1;	// IMP=0x0000000000079d6b
- (id)identifier;	// IMP=0x0000000000079cf1
- (id)propertyItem;	// IMP=0x0000000000079ca1
@property(readonly, nonatomic) CNPropertyAction *propertyAction;
- (id)initWithPropertyAction:(id)arg1;	// IMP=0x0000000000079c60

@end
