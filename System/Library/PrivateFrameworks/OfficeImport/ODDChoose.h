//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, ODDOtherwise;

__attribute__((visibility("hidden")))
@interface ODDChoose
{
    NSMutableArray *mWhens;	// 8 = 0x8
    ODDOtherwise *mOtherwise;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000032dd4f
- (id)description;	// IMP=0x000000000032dd11
- (void)setOtherwise:(id)arg1;	// IMP=0x000000000032dcfd
- (id)otherwise;	// IMP=0x000000000032dce8
- (void)addWhen:(id)arg1;	// IMP=0x000000000032dcca
- (id)whens;	// IMP=0x000000000032dcb5
- (id)init;	// IMP=0x000000000032dc3a

@end

