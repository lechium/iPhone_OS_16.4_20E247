//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapItem;

@interface ForwardGeocodeAction
{
    MKMapItem *_originalMapItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000b29031
@property(retain, nonatomic) MKMapItem *originalMapItem; // @synthesize originalMapItem=_originalMapItem;
- (int)analyticsLaunchActionType;	// IMP=0x0010000000b29001
- (void)resolveMapItemWithTraits:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000b28d47
- (id)initWithMapItem:(id)arg1;	// IMP=0x0010000000b28cd9

@end

