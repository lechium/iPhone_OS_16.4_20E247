//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIStepper;

@interface ReservationRefinementPartySizeTableViewCell
{
    UIStepper *_stepperControl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000006ebcde
@property(readonly, nonatomic) UIStepper *stepperControl; // @synthesize stepperControl=_stepperControl;
- (void)updateStepperValueToValue:(unsigned long long)arg1;	// IMP=0x00100000006ebc50
- (void)updateLabel;	// IMP=0x00100000006ebb2f
- (void)valueChanged:(id)arg1;	// IMP=0x00100000006ebb1d
- (void)setupConstraints;	// IMP=0x00100000006eb918
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000006eb7d5

@end

