//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionSaveSession;

@interface CollectionAddViewController
{
    CollectionSaveSession *_editSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000068adec
@property(retain, nonatomic) CollectionSaveSession *editSession; // @synthesize editSession=_editSession;
- (void)saveMapItem:(id)arg1;	// IMP=0x001000000068a9c2
- (_Bool)searchDataSource:(id)arg1 shouldFilterItem:(id)arg2;	// IMP=0x001000000068a826
- (int)requestSource;	// IMP=0x001000000068a81b
- (id)headerTitle;	// IMP=0x001000000068a7b3

@end

