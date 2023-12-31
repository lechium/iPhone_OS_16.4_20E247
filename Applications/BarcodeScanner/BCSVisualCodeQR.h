//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNBarcodeObservation;

@interface BCSVisualCodeQR
{
    VNBarcodeObservation *_barcodeObservation;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0020000000010fb0
- (struct CGRect)boundingBox;	// IMP=0x0010000000010f72
- (id)payloadString;	// IMP=0x0010000000010f55
- (struct CGPoint)bottomLeft;	// IMP=0x0010000000010f38
- (struct CGPoint)bottomRight;	// IMP=0x0010000000010f1b
- (struct CGPoint)topRight;	// IMP=0x0010000000010efe
- (struct CGPoint)topLeft;	// IMP=0x0010000000010ee1
- (long long)codeType;	// IMP=0x0010000000010ed9
- (id)initWithBarcodeObservation:(id)arg1;	// IMP=0x0010000000010e58

@end

