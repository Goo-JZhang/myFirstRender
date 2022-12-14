#ifndef __MODEL_H__
#define __MODEL_H__

#include <vector>
#include "geometry.h"
#include "tgaimage.h"

class Model {
private:
	std::vector<Vec3f> verts_;
	std::vector<Vec2f> txverts_;
	std::vector<Vec3f> nverts_;
	std::vector<std::vector<int> > faces_;
	TGAImage texture_; 
public:
	Model(const char *filename);
	~Model();
	int nverts();
	int nfaces();
	int texture_width();
	int texture_height();
	Vec3f vert(int i);
	Vec2f txvert(int i);
	Vec3f nvert(int i);
	std::vector<int> face(int idx);
	TGAColor texture_color(const Vec2f uv);
	void get_texture(const char *texture_filename);
	TGAImage texture();
};

#endif //__MODEL_H__