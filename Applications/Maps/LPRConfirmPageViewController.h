//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIScrollView, UIView, VGVehicle;

@interface LPRConfirmPageViewController
{
    long long _scenario;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    VGVehicle *_vehicle;	// 32 = 0x20
    NSString *_vehicleTypeTitle;	// 40 = 0x28
}

- (void);	// IMP=0x0020000000ab33f9
@property(copy, nonatomic) NSString *vehicleTypeTitle; // @synthesize vehicleTypeTitle=_vehicleTypeTitle;
@property(retain, nonatomic) VGVehicle *vehicle; // @synthesize vehicle=_vehicle;
- (void)nextButtonPressed;	// IMP=0x0010000000ab3295
- (void)doneButtonPressed;	// IMP=0x0010000000ab318c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000ab30e2
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000ab2ff2
- (void)viewDidLoad;	// IMP=0x0010000000ab0f49
- (id)initWithVehicle:(id)arg1 vehicleTypeTitle:(id)arg2 scenario:(long long)arg3;	// IMP=0x0010000000ab0e99

@end
