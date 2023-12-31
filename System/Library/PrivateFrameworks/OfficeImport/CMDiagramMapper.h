//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMDrawingContext, ODDDiagram;

__attribute__((visibility("hidden")))
@interface CMDiagramMapper
{
    ODDDiagram *mDiagram;	// 176 = 0xb0
    CMDrawingContext *mDrawingContext;	// 184 = 0xb8
}

+ (int)diagramTypeFromString:(id)arg1;	// IMP=0x00600000001e4b8c
- (void).cxx_destruct;	// IMP=0x000000000045bc7d
- (id)styleMatrix;	// IMP=0x00000000001e84c1
- (id)diagram;	// IMP=0x00000000001e7ce0
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001e446a
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;	// IMP=0x00000000001e4244
- (id)copyDiagramMapperForId:(id)arg1;	// IMP=0x00000000001e4862
- (id)identifierFromLayoutTypeId:(id)arg1;	// IMP=0x00000000001e4782

@end

