//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDResources, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EDColumnInfoCollection
{
    EDResources *mResources;	// 24 = 0x18
    EDWorksheet *mWorksheet;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000039faeb
- (id)columnInfoCreateIfNilForColumnNumber:(int)arg1;	// IMP=0x000000000039f753
- (id)columnInfoForColumnNumber:(int)arg1;	// IMP=0x0000000000131db2
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;	// IMP=0x000000000011d0ec

@end
