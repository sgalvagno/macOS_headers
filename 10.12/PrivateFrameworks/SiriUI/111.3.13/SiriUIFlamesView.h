//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOpenGLView.h>

@class FlameGroup, NSMutableArray, NSView, SiriUIAudioLevelSmoother;
@protocol SiriUIFlamesViewDelegate;

__attribute__((visibility("hidden")))
@interface SiriUIFlamesView : NSOpenGLView
{
    BOOL _showAura;
    BOOL _reduceFrameRate;
    BOOL _shadersAreCompiled;
    BOOL _reduceMotionEnabled;
    int _mode;
    int _state;
    unsigned int _viewWidth;
    unsigned int _viewHeight;
    unsigned int _vertexArrayObjectHandle;
    unsigned int _vertexBufferHandle;
    unsigned int _elementArrayHandle;
    unsigned int _numVertices;
    unsigned int _numAuraIndices;
    unsigned int _numAuraIndicesCulled;
    unsigned int _numWaveIndices;
    unsigned int _maxVertexCircles;
    float _maxSubdivisionLevel;
    unsigned int _auraVertexCircles;
    float _auraMinSubdivisionLevel;
    float _auraMaxSubdivisionLevel;
    int _flameProgramHandle;
    int _auraProgramHandle;
    float _dictationUnitSize;
    id <SiriUIFlamesViewDelegate> _delegate;
    NSView *_activityPositioningView;
    NSMutableArray *_flameGroups;
    FlameGroup *_currentFlameGroup;
    SiriUIAudioLevelSmoother *_levelSmoother;
    struct __CVDisplayLink *_displayLink;
    struct CGRect _activeFrame;
}

@property(nonatomic) struct __CVDisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain) SiriUIAudioLevelSmoother *levelSmoother; // @synthesize levelSmoother=_levelSmoother;
@property float dictationUnitSize; // @synthesize dictationUnitSize=_dictationUnitSize;
@property BOOL reduceMotionEnabled; // @synthesize reduceMotionEnabled=_reduceMotionEnabled;
@property int auraProgramHandle; // @synthesize auraProgramHandle=_auraProgramHandle;
@property int flameProgramHandle; // @synthesize flameProgramHandle=_flameProgramHandle;
@property BOOL shadersAreCompiled; // @synthesize shadersAreCompiled=_shadersAreCompiled;
@property(retain) FlameGroup *currentFlameGroup; // @synthesize currentFlameGroup=_currentFlameGroup;
@property(retain) NSMutableArray *flameGroups; // @synthesize flameGroups=_flameGroups;
@property float auraMaxSubdivisionLevel; // @synthesize auraMaxSubdivisionLevel=_auraMaxSubdivisionLevel;
@property float auraMinSubdivisionLevel; // @synthesize auraMinSubdivisionLevel=_auraMinSubdivisionLevel;
@property unsigned int auraVertexCircles; // @synthesize auraVertexCircles=_auraVertexCircles;
@property float maxSubdivisionLevel; // @synthesize maxSubdivisionLevel=_maxSubdivisionLevel;
@property unsigned int maxVertexCircles; // @synthesize maxVertexCircles=_maxVertexCircles;
@property unsigned int numWaveIndices; // @synthesize numWaveIndices=_numWaveIndices;
@property unsigned int numAuraIndicesCulled; // @synthesize numAuraIndicesCulled=_numAuraIndicesCulled;
@property unsigned int numAuraIndices; // @synthesize numAuraIndices=_numAuraIndices;
@property unsigned int numVertices; // @synthesize numVertices=_numVertices;
@property unsigned int elementArrayHandle; // @synthesize elementArrayHandle=_elementArrayHandle;
@property unsigned int vertexBufferHandle; // @synthesize vertexBufferHandle=_vertexBufferHandle;
@property unsigned int vertexArrayObjectHandle; // @synthesize vertexArrayObjectHandle=_vertexArrayObjectHandle;
@property unsigned int viewHeight; // @synthesize viewHeight=_viewHeight;
@property unsigned int viewWidth; // @synthesize viewWidth=_viewWidth;
@property(nonatomic) struct CGRect activeFrame; // @synthesize activeFrame=_activeFrame;
@property(retain) NSView *activityPositioningView; // @synthesize activityPositioningView=_activityPositioningView;
@property(nonatomic) BOOL reduceFrameRate; // @synthesize reduceFrameRate=_reduceFrameRate;
@property(nonatomic) BOOL showAura; // @synthesize showAura=_showAura;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <SiriUIFlamesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)_displayLinkCallbackHandler;
- (void)_resumeDisplayLink;
- (void)_pauseDisplayLink;
- (void)_stopDisplayLink;
- (void)_startDisplayLink;
- (BOOL)_setupShaders;
- (id)_shaderSource:(id)arg1;
- (BOOL)_setupVertexBuffer;
- (int)_generateIndicesForNumCircleShapes:(int)arg1 withMaxSubdivisionLevel:(float)arg2 startingWithNumSubdivisionLevel:(float)arg3 forIndices:(unsigned int **)arg4 atStartIndex:(int)arg5 withFill:(BOOL)arg6 withCullingForAura:(BOOL)arg7 forVertices:(struct *)arg8;
-     // Error parsing type: 24@0:816, name: _predeterminedVertexPositionForAuraWithPolarVertex:
- (unsigned int)_numVerticesPerCircle;
- (void)reshape;
- (void)prepareOpenGL;
- (void)setActiveBoundsFromPositioningView;
- (struct CGRect)activeBounds;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateCurveLayer;
- (double)_scale;
- (float)_currentMicPowerLevel;
- (void)_drawView;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_readReduceMotionEnabled;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2;

@end

