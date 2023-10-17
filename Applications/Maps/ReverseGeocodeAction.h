//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ReverseGeocodeAction
{
    NSString *_label;	// 8 = 0x8
    struct CLLocationCoordinate2D _coordinate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000096cbf7
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (int)analyticsLaunchActionType;	// IMP=0x001000000096cb9a
- (_Bool)isCompatibleWithRestorationTask;	// IMP=0x001000000096cb92
- (void)resolveMapItemWithTraits:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000096c860
- (id)initWithLabel:(id)arg1 atCoordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x001000000096c7cc

@end
