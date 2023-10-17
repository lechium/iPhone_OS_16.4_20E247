//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLFreehandDrawingToolInputPoint : NSObject
{
    _Bool _predicted;	// 8 = 0x8
    _Bool _wasAddedByTouchesEnded;	// 9 = 0x9
    double _time;	// 16 = 0x10
    long long _inputType;	// 24 = 0x18
    struct CGPoint _unscaledPoint;	// 32 = 0x20
}

@property(readonly, nonatomic) _Bool wasAddedByTouchesEnded; // @synthesize wasAddedByTouchesEnded=_wasAddedByTouchesEnded;
@property(readonly, nonatomic) _Bool predicted; // @synthesize predicted=_predicted;
@property(readonly, nonatomic) long long inputType; // @synthesize inputType=_inputType;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) struct CGPoint unscaledPoint; // @synthesize unscaledPoint=_unscaledPoint;
- (id)initWithUnscaledPoint:(struct CGPoint)arg1 time:(double)arg2 inputType:(long long)arg3 predicted:(_Bool)arg4 wasAddedByTouchesEnded:(_Bool)arg5;	// IMP=0x001000000029a137

@end
