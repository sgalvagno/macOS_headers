//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioBuffer {
    unsigned int mNumberChannels;
    unsigned int mDataByteSize;
    void *mData;
};

struct AudioBufferList {
    unsigned int mNumberBuffers;
    struct AudioBuffer mBuffers[1];
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioTimeStamp {
    double mSampleTime;
    unsigned long long mHostTime;
    double mRateScalar;
    unsigned long long mWordClockTime;
    struct SMPTETime mSMPTETime;
    unsigned int mFlags;
    unsigned int mReserved;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CameraMotionAnalysis {
    struct Vector<ma::CameraMotionSegment *> _field1;
    struct CameraMotionSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    _Bool _field5;
    struct HinkleyDetector _field6[6];
    int _field7;
    struct RotationAnalysis _field8;
    _Bool _field9;
    _Bool _field10;
};

struct CameraMotionSegment;

struct ComponentInstanceRecord {
    long long _field1[1];
};

struct DSPSplitComplex {
    float *realp;
    float *imagp;
};

struct DescriptorAnalysis {
    struct Vector<ma::DescriptorSegment *> _field1;
    struct DescriptorSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    _Bool _field5;
    struct Rotator *_field6;
};

struct DescriptorSegment;

struct EncodeAnalysis {
    int _field1;
    int _field2;
    char *_field3;
    struct __CVBuffer *_field4;
    struct Translation _field5;
    long long *_field6;
    long long *_field7;
    int *_field8;
    int *_field9;
    int *_field10;
    struct Translation *_field11;
    struct FrameBuffer *_field12;
    struct EncodeStats *_field13;
    float _field14;
    float _field15;
    struct MotionFieldAnalysis _field16;
    float _field17[10];
};

struct EncodeParameters {
    int _field1;
    int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned short _field6;
    unsigned short _field7;
};

struct EncodeStats;

struct FineSubjectMotionAnalysis {
    struct Vector<ma::FineSubjectMotionSegment *> _field1;
    struct FineSubjectMotionSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    _Bool _field5;
    struct HinkleyDetector _field6;
    _Bool _field7;
};

struct FineSubjectMotionSegment;

struct Frame {
    int frame_idx_;
    CDStruct_1b6d18a9 timestamp_;
    CDStruct_1b6d18a9 duration_;
    struct Translation ave_motion_;
    struct Translation org_motion_;
    unsigned long long distortion_;
    float distortion_norm_;
    struct Translation motion_change_;
    unsigned int compressed_bytes_;
    _Bool blur_;
    struct Translation acc_var_;
    float texture_;
    struct MotionResult motion_result_;
    float interestingness_;
    struct Histogram histogram_;
};

struct FrameBuffer {
    int frame_count_;
    struct Frame buffer_[35];
};

struct HinkleyDetector {
    float _field1;
    float _field2;
    int _field3;
    struct HinkleyStats _field4;
};

struct HinkleyStats {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct Histogram {
    float extremities_;
    float overexposes_;
    int *histogram_[3];
    int *moments_hist_[2];
};

struct InterestingnessAnalysis {
    struct Vector<ma::InterestingnessSegment *> _field1;
    struct InterestingnessSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    _Bool _field5;
    struct HinkleyDetector _field6;
};

struct InterestingnessSegment;

struct IrisAnalysis {
    float _field1;
    float _field2;
    int _field3;
    int _field4;
    _Bool _field5;
    struct __CFArray *_field6;
};

struct Kernel {
    float *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct MetaDataAnalysis {
    _Bool _field1;
    struct FrameBuffer *_field2;
    struct Translation _field3;
    struct Translation _field4;
};

struct MotionFieldAnalysis {
    struct EncodeStats *_field1;
    float *_field2;
    float *_field3;
    char *_field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    float _field9;
    float _field10;
    float _field11;
    _Bool _field12;
    int *_field13[2];
    float *_field14[2];
    short *_field15[2];
    int _field16[2];
    int *_field17[2];
    float *_field18[2];
    float *_field19[2];
    struct ObjectDetection _field20;
    struct ObjectTracking _field21;
};

struct MotionFilter {
    struct FrameBuffer *_field1;
    _Bool _field2;
};

struct MotionResult {
    float significant_values_[6];
    float confidence_[6];
    float fine_action_score_;
    float action_score_;
    float track_score_;
    float rotation_angle_;
    int action_blocks_;
    float action_motion_;
    _Bool valid_mb_;
    _Bool valid_submb_;
    int support_size_;
    float residual_var_;
    float gmv_[2];
    CDStruct_1b6d18a9 duration_;
    float scene_delta_;
    float scene_delta_ratio_;
    struct Vector<ma::Object *> objects_;
    struct Vector<ma::Object *> detect_objects_;
};

struct MotionVector;

struct MovingObjectAnalysis {
    struct Vector<ma::MovingObjectSegment *> _field1;
    struct MovingObjectSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    _Bool _field5;
    int _field6;
    int _field7;
    int _field8;
};

struct MovingObjectSegment;

struct Object {
    int _field1;
    struct CGRect _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    _Bool _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    _Bool _field10;
};

struct ObjectDetection {
    struct Vector<ma::Object *> _field1;
    struct MotionVector *_field2;
    float *_field3;
    int *_field4;
    int *_field5;
    int *_field6;
    int _field7;
    int _field8;
    _Bool _field9;
};

struct ObjectTracking {
    struct Object _field1;
    struct Object _field2;
    _Bool _field3;
    int _field4;
    int _field5;
    float *_field6;
    float *_field7;
    float *_field8;
    float *_field9;
    float *_field10;
    float *_field11;
    float *_field12;
    long long _field13;
    long long _field14;
    float *_field15;
    int _field16;
    int _field17;
    long long _field18;
    int _field19;
    struct Vector<ma::ObjectTracking::Expert *> _field20;
    _Bool _field21;
};

struct ObstructionAnalysis {
    CDStruct_1b6d18a9 _field1;
    struct __CFArray *_field2;
    int _field3;
    int _field4;
    struct {
        int _field1;
        int _field2;
        int _field3;
    } _field5;
    CDStruct_4aceb884 _field6;
    CDStruct_4aceb884 _field7;
    float _field8;
    int _field9;
    CDStruct_1b6d18a9 _field10;
};

struct OpaqueVTImageRotationSession;

struct PreEncodeAnalysis {
    _Bool _field1;
    _Bool _field2;
    struct __CFData *_field3;
    struct __CFArray *_field4;
    _Bool _field5;
    struct Vector<unsigned int> _field6;
    struct Vector<unsigned short> _field7;
    struct Vector<float> _field8;
    struct Vector<float> _field9;
    CDStruct_1b6d18a9 _field10;
    int _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    struct EncodeParameters _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    CDStruct_1b6d18a9 _field19;
    double _field20;
    unsigned int _field21;
};

struct QualityAnalysis {
    struct Vector<ma::QualitySegment *> _field1;
    struct QualitySegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    _Bool _field5;
    CDStruct_1b6d18a9 _field6;
    float _field7;
    struct FrameBuffer *_field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    int _field13;
    int _field14;
    int _field15;
    _Bool _field16;
    _Bool _field17;
    CDStruct_1b6d18a9 _field18;
    float _field19;
    float _field20;
    struct __CFArray *_field21;
};

struct QualitySegment;

struct RotationAnalysis {
    struct Vector<ma::RotationSegment *> _field1;
    struct RotationSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    _Bool _field5;
    struct HinkleyDetector _field6;
    int _field7;
    int _field8;
};

struct RotationSegment;

struct Rotator {
    struct __CVPixelBufferPool *_field1;
    int _field2;
    int _field3;
    int _field4;
    struct OpaqueVTImageRotationSession *_field5;
};

struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
};

struct SceneAnalysis {
    struct Vector<ma::SceneSegment *> _field1;
    struct SceneSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    int _field9;
    int _field10;
    int _field11;
    struct CameraMotionAnalysis _field12;
    struct SubjectMotionAnalysis _field13;
    struct FineSubjectMotionAnalysis _field14;
    struct TrackingAnalysis _field15;
    struct DescriptorAnalysis _field16;
    struct MovingObjectAnalysis _field17;
    struct InterestingnessAnalysis _field18;
    struct QualityAnalysis _field19;
};

struct SceneSegment;

struct SubjectMotionAnalysis {
    struct Vector<ma::SubjectMotionSegment *> _field1;
    struct SubjectMotionSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    _Bool _field5;
    struct HinkleyDetector _field6;
};

struct SubjectMotionSegment;

struct TrackSegment;

struct TrackingAnalysis {
    struct Vector<ma::TrackSegment *> _field1;
    struct TrackSegment *_field2;
    struct __CFArray *_field3;
    CDStruct_1b6d18a9 _field4;
    _Bool _field5;
    struct HinkleyDetector _field6;
};

struct Translation {
    float x_;
    float y_;
    float z_;
};

struct Vector<float> {
    struct __CFArray *_field1;
};

struct Vector<ma::CameraMotionSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::DescriptorSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::FineSubjectMotionSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::InterestingnessSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::MovingObjectSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::Object *> {
    struct __CFArray *vector_;
};

struct Vector<ma::ObjectTracking::Expert *> {
    struct __CFArray *_field1;
};

struct Vector<ma::QualitySegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::RotationSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::SceneSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::SubjectMotionSegment *> {
    struct __CFArray *_field1;
};

struct Vector<ma::TrackSegment *> {
    struct __CFArray *_field1;
};

struct Vector<unsigned int> {
    struct __CFArray *_field1;
};

struct Vector<unsigned short> {
    struct __CFArray *_field1;
};

struct __CFArray;

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct vImage_Buffer {
    void *data;
    unsigned long long height;
    unsigned long long width;
    unsigned long long rowBytes;
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
} CDStruct_4aceb884;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

