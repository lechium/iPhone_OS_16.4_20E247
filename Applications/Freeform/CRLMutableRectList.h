//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLMutableRectList
{
}

- (void)applyTransform:(struct CGAffineTransform)arg1;	// IMP=0x0040000000179890
- (void)setList:(id)arg1;	// IMP=0x0010000000179874
- (void)makeEmpty;	// IMP=0x0010000000179866
- (void)replaceRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0010000000179847
- (void)insertRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x001000000017957a
- (void)addRectList:(id)arg1;	// IMP=0x0010000000179309
- (void)addRect:(struct CGRect)arg1;	// IMP=0x00100000001791ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001791be

@end
