//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyBestIDSValueQuery;

__attribute__((visibility("hidden")))
@interface CNPropertyFaceTimeAction
{
    long long _type;	// 8 = 0x8
    CNPropertyBestIDSValueQuery *_bestFaceTimeQuery;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000158ce6
@property(retain, nonatomic) CNPropertyBestIDSValueQuery *bestFaceTimeQuery; // @synthesize bestFaceTimeQuery=_bestFaceTimeQuery;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)queryComplete;	// IMP=0x0000000000158c02
- (void)_queryFaceTimeStatus;	// IMP=0x0000000000158b29
- (void)performActionForItem:(id)arg1 sender:(id)arg2;	// IMP=0x00000000001587ea
- (_Bool)canPerformAction;	// IMP=0x0000000000158787
- (void)dealloc;	// IMP=0x000000000015873e
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;	// IMP=0x00000000001586e6

@end
